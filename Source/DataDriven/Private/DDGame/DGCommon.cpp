// Fill out your copyright notice in the Description page of Project Settings.

#include "DGCommon.h"


UDGCommon* UDGCommon::DGInst = NULL;


UDGCommon* UDGCommon::Get()
{
	if (!DGInst)
	{
		DGInst = NewObject<UDGCommon>();
		DGInst->AddToRoot();
	}
	return DGInst;
}



