// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGEventSubsystem.h"

AFGEventSubsystem::AFGEventSubsystem() : Super() {
	this->bAlwaysRelevant = true;
	this->bReplicates = true;
}
void AFGEventSubsystem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
AFGEventSubsystem* AFGEventSubsystem::Get(UWorld* world){ return nullptr; }
AFGEventSubsystem* AFGEventSubsystem::GetEventSubsystem(UObject* worldContext){ return nullptr; }
TArray< EEvents > AFGEventSubsystem::GetCurrentEvents(){ return TArray<EEvents>(); }
void AFGEventSubsystem::StoreCalendarDataForEvent(EEvents event, FCalendarData calendarData){ }
bool AFGEventSubsystem::GetStoredCalendarDataForEvent(EEvents event, FCalendarData& out_calendarData){ return bool(); }
bool AFGEventSubsystem::GetOverridenEventDateTime(EEvents event, FDateTime& out_OverriddenDateTime){ return bool(); }
