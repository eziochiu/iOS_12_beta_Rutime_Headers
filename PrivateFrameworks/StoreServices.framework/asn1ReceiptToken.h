/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface asn1ReceiptToken : NSObject {
    asn1Token * mContentToken;
    unsigned long long  mType;
    unsigned long long  mTypeVersion;
}

@property (readonly) asn1Token *contentToken;
@property (readonly) unsigned long long integerValue;
@property (readonly) NSString *stringValue;
@property (readonly) unsigned long long type;
@property (readonly) unsigned long long typeVersion;

+ (id)readFromBuffer:(const char *)arg1;

- (id)_initWithType:(unsigned long long)arg1 typeVersion:(unsigned long long)arg2 contentToken:(id)arg3;
- (id)contentToken;
- (void)dealloc;
- (id)description;
- (unsigned long long)integerValue;
- (id)stringValue;
- (unsigned long long)type;
- (unsigned long long)typeVersion;

@end
