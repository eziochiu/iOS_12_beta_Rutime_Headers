/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMMessageActionItem : IMItem <IMRemoteObjectCoding, NSCopying, NSSecureCoding> {
    long long  _actionType;
    NSString * _originalMessageGUID;
    NSString * _otherCountryCode;
    NSString * _otherHandle;
    NSString * _otherUnformattedID;
}

@property (nonatomic) long long actionType;
@property (nonatomic, retain) NSString *originalMessageGUID;
@property (nonatomic, retain) NSString *otherCountryCode;
@property (nonatomic, retain) NSString *otherHandle;
@property (nonatomic, retain) NSString *otherUnformattedID;

// Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities

+ (bool)supportsSecureCoding;

- (long long)actionType;
- (id)copyDictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)originalMessageGUID;
- (id)otherCountryCode;
- (id)otherHandle;
- (id)otherUnformattedID;
- (void)setActionType:(long long)arg1;
- (void)setOriginalMessageGUID:(id)arg1;
- (void)setOtherCountryCode:(id)arg1;
- (void)setOtherHandle:(id)arg1;
- (void)setOtherUnformattedID:(id)arg1;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (id)_newChatItems;

@end
