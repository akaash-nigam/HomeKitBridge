//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HAKCharacteristicResponse.h"

@interface HAKCharacteristicReadResponse : HAKCharacteristicResponse
{
    long long _status;
    id _value;
}

+ (id)responseWithRequest:(id)arg1 status:(long long)arg2 value:(id)arg3;
@property(readonly, copy, nonatomic) id value; // @synthesize value=_value;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithRequest:(id)arg1 status:(long long)arg2 value:(id)arg3;
- (id)initWithRequest:(id)arg1;

@end

