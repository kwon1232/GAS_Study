// Fill out your copyright notice in the Description page of Project Settings.


#include "GA/ABGA_Rotate.h"
#include "GameFramework/RotatingMovementComponent.h"
#include "Tag/ABGameplayTag.h"

UABGA_Rotate::UABGA_Rotate()
{
	AbilityTags.AddTag(ABTAG_ACTOR_ROTATE);
	ActivationOwnedTags.AddTag(ABTAG_ACTOR_ISROTATING);
}

void UABGA_Rotate::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);

	// 아바타 액터 가져오기
	AActor* AvatarActor = ActorInfo->AvatarActor.Get();
	// 아바타 액터가 유효하다면
	if (AvatarActor)
	{
		/*
		* URotatingMovementComponent::StaticClass() → 컴포넌트의 타입 정보
		* GetComponentByClass(...) → 그 타입에 해당하는 붙어 있는 실제 인스턴스
		* Cast<>() → 그걸 URotatingMovementComponent* 타입으로 변환
		* Activate(true) → 그 인스턴스를 작동시킴
		* 
		* StaticClass()				타입 정보 (설계도) 가져오기
		* GetDefaultObject()		클래스의 "기본 객체(CDO)", 설정값 참고용 가져오기
		* GetComponentByClass()		실제 게임 안에서 생성된 인스턴스 가져오기
		*/
		URotatingMovementComponent* RotatingMovement = Cast<URotatingMovementComponent>(AvatarActor->GetComponentByClass(URotatingMovementComponent::StaticClass()));
		if (RotatingMovement)
		{
			RotatingMovement->Activate(true);
		}
	}
}

void UABGA_Rotate::CancelAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateCancelAbility)
{
	Super::CancelAbility(Handle, ActorInfo, ActivationInfo, bReplicateCancelAbility);

	AActor* AvatarActor = ActorInfo->AvatarActor.Get();
	if (AvatarActor)
	{
		URotatingMovementComponent* RotatingMovement = Cast<URotatingMovementComponent>(AvatarActor->GetComponentByClass(URotatingMovementComponent::StaticClass()));
		if (RotatingMovement)
		{
			RotatingMovement->Deactivate();
		}
	}
}
