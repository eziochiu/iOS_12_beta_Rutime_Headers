/* made by EzioChiu
   Image: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
 */

@interface WCMessage : NSObject <NSSecureCoding> {
    NSData * _data;
    bool  _dictionaryMessage;
    NSString * _identifier;
    NSString * _pairingID;
}

@property (readonly, copy) NSData *data;
@property (getter=isDictionaryMessage, readonly) bool dictionaryMessage;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *pairingID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)data;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithPairingID:(id)arg1 identifier:(id)arg2 data:(id)arg3 dictionaryMessage:(bool)arg4;
- (bool)isDictionaryMessage;
- (bool)isEqual:(id)arg1;
- (id)pairingID;

@end
