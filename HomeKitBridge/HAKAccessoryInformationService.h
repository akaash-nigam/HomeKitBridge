//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HAKService.h"

@class HAKCharacteristic;

@interface HAKAccessoryInformationService : HAKService
{
}

+ (id)accessoryInformationService;
@property(readonly, nonatomic) HAKCharacteristic *serialNumberCharacteristic;
@property(readonly, nonatomic) HAKCharacteristic *modelCharacteristic;
@property(readonly, nonatomic) HAKCharacteristic *manufacturerCharacteristic;
@property(readonly, nonatomic) HAKCharacteristic *nameCharacteristic;
@property(readonly, nonatomic) HAKCharacteristic *identifyCharacteristic;
- (void)addIncludedService:(id)arg1;
- (void)removeCharacteristic:(id)arg1;
- (id)_restrictedCharacteristicSet;
- (id)initWithType:(id)arg1 isPrimary:(BOOL)arg2 characteristics:(id)arg3 includedServices:(id)arg4;
- (id)init;

@end

