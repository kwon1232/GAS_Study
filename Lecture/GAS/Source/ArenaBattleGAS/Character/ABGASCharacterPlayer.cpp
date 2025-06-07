// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/ABGASCharacterPlayer.h"
#include "AbilitySystemComponent.h"
#include "Player/ABGASPlayerState.h"

// Sets default values
AABGASCharacterPlayer::AABGASCharacterPlayer()
{
	// 해당 클래스는 AVataActor이다.
	// 플레이어와 폰은 하나의 캐릭터로 관리해야되기 때문에,
	// CreateDefaultSubobject로 ASC를 생성하지 않고 nullptr로 설정해준다.
	// 즉 하나의 데이터로 플레이어와 폰을 관리하게 된다.
	ASC = nullptr;
}

UAbilitySystemComponent* AABGASCharacterPlayer::GetAbilitySystemComponent() const
{
	return ASC;
}

void AABGASCharacterPlayer::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	AABGASPlayerState* GASPS = GetPlayerState<AABGASPlayerState>();
	if (GASPS)
	{
		//OwnerActor에서 ASC를 가져오게 된다.
		ASC = GASPS->GetAbilitySystemComponent();
		// ASC 구현 
		ASC->InitAbilityActorInfo(GASPS, this);

		for (const auto& StartAbility : StartAbilities)
		{
			FGameplayAbilitySpec StartSpec(StartAbility);
			ASC->GiveAbility(StartSpec);
		}
	}
}

