//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HAKPairingCharacteristic.h"

#import "HAKAddPairingSessionDelegate.h"
#import "HAKListPairingsSessionDataSource.h"
#import "HAKListPairingsSessionDelegate.h"
#import "HAKRemovePairingSessionDelegate.h"

@class NSString;

@interface HAKPairingsCharacteristic : HAKPairingCharacteristic <HAKAddPairingSessionDelegate, HAKRemovePairingSessionDelegate, HAKListPairingsSessionDelegate, HAKListPairingsSessionDataSource>
{
}

+ (id)pairingsCharacteristic;
- (id)pairingsForListPairingsSession:(id)arg1;
- (BOOL)controllerIsAdminForListPairingsSession:(id)arg1;
- (BOOL)removePairingSession:(id)arg1 removePairingForIdentifier:(id)arg2;
- (BOOL)controllerIsAdminForRemovePairingSession:(id)arg1;
- (void)addPairingSession:(id)arg1 didAddPairing:(id)arg2;
- (BOOL)controllerIsAdminForAddPairingSession:(id)arg1;
- (id)handleReadRequest:(id)arg1;
- (id)handleWriteRequest:(id)arg1;
- (id)initWithType:(id)arg1 properties:(unsigned long long)arg2 format:(unsigned long long)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

