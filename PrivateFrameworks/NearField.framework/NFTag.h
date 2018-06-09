/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

@interface NFTag : NSObject <NFTag, NSSecureCoding> {
    NSData * _AppData;
    NSData * _IDm;
    NSData * _PMm;
    NSData * _SystemCode;
    NSData * _UID;
    NSArray * _allSystemCodes;
    NSString * _description;
    NSData * _tagID;
    unsigned int  _technology;
    unsigned int  _type;
}

@property (nonatomic, readonly, copy) NSData *AppData;
@property (nonatomic, readonly, copy) NSData *IDm;
@property (nonatomic, readonly, copy) NSData *PMm;
@property (nonatomic, readonly, copy) NSData *SystemCode;
@property (nonatomic, readonly, copy) NSData *UID;
@property (nonatomic, readonly, copy) NSArray *allSystemCodes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSData *tagID;
@property (nonatomic, readonly) unsigned int technology;
@property (nonatomic, readonly) unsigned int type;

+ (bool)supportsSecureCoding;

- (id)AppData;
- (id)IDm;
- (id)PMm;
- (id)SystemCode;
- (id)UID;
- (id)allSystemCodes;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNFTag:(id)arg1;
- (id)tagID;
- (unsigned int)technology;
- (unsigned int)type;

@end
