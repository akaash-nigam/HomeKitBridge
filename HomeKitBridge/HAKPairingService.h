//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HAKService.h"

@class HAKCharacteristic, HAKPairSetupCharacteristic, HAKPairVerifyCharacteristic;

@interface HAKPairingService : HAKService
{
}

+ (id)pairingService;
- (void)addIncludedService:(id)arg1;
- (void)removeCharacteristic:(id)arg1;
- (id)_restrictedCharacteristicSet;
@property(readonly, nonatomic) HAKCharacteristic *pairingsCharacteristic;
@property(readonly, nonatomic) HAKCharacteristic *pairingFeaturesCharacteristic;
@property(readonly, nonatomic) HAKPairVerifyCharacteristic *pairVerifyCharacteristic;
@property(readonly, nonatomic) HAKPairSetupCharacteristic *pairSetupCharacteristic;
- (id)initWithType:(id)arg1 isPrimary:(BOOL)arg2 characteristics:(id)arg3 includedServices:(id)arg4;
- (id)init;

@end

