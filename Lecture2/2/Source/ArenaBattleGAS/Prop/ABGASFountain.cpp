// Fill out your copyright notice in the Description page of Project Settings.


#include "Prop/ABGASFountain.h"
#include "GameFramework/RotatingMovementComponent.h"
#include "ArenaBattleGAS.h"
#include "AbilitySystemComponent.h"

AABGASFountain::AABGASFountain()
{
	ASC = CreateAbstractDefaultSubobject<UAbilitySystemComponent>(TEXT("ASC"));
	RotatingMovement = CreateDefaultSubobject<URotatingMovementComponent>(TEXT("RotateMovement"));
	ActionPeriod = 3.0f;
}

UAbilitySystemComponent* AABGASFountain::GetAbilitySystemComponent() const
{
	return ASC;
}

void AABGASFountain::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	
	RotatingMovement->bAutoActivate = false;
	RotatingMovement->Deactivate();

	ASC->InitAbilityActorInfo(this, this);
}
 
void AABGASFountain::BeginPlay()
{
	Super::BeginPlay();
	/*
	* SetTimer(
    * FTimerHandle& InOutHandle,		// 타이머 핸들 (반복 여부 등 제어 가능)
    * UObject* InObj,					// 호출 대상 객체 (보통 this)
    * FunctionPointer InTimerMethod,	// 호출할 함수 주소
    * float InRate,						// 주기(초 단위)
    * bool InLoop,						// 반복 여부
    * float FirstDelay					// 처음 호출까지의 지연 시간
	* );
	*/
	GetWorld()->GetTimerManager().SetTimer(ActionTimer, this, &AABGASFountain::TimerAction, ActionPeriod, true, 0.0f);
}

void AABGASFountain::TimerAction()
{
	ABGAS_LOG(LogABGAS, Log, TEXT("Begin"));

	if (!RotatingMovement->IsActive())
	{
		RotatingMovement->Activate(true);
	}
	else 
	{
		RotatingMovement->Deactivate();
	}
}

