//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@import Foundation;

@class HAKChaCha20, HAKPoly1305;

@interface HAKChaCha20Poly1305 : NSObject
{
    HAKChaCha20 *_chaCha20;
    HAKPoly1305 *_poly1305;
}

@property(retain, nonatomic) HAKPoly1305 *poly1305; // @synthesize poly1305=_poly1305;
@property(retain, nonatomic) HAKChaCha20 *chaCha20; // @synthesize chaCha20=_chaCha20;
- (id)decryptFromData:(id)arg1 additionalAuthenticatedData:(id)arg2 error:(id *)arg3;
- (id)encryptWithData:(id)arg1 additionalAuthenticatedData:(id)arg2 error:(id *)arg3;
- (void)_updateWithPadding:(id)arg1;
- (id)authTagFromEncryptedData:(id)arg1 additionalAuthenticatedData:(id)arg2;
- (id)initWithKey:(id)arg1 nonce:(id)arg2;

@end

