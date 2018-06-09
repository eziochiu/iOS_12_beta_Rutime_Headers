/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUKeychainItem : NSObject {
    NSString * _accessGroup;
    int  _accessibleType;
    NSString * _identifier;
    bool  _legacy;
    NSDictionary * _metadata;
    NSString * _name;
    NSDictionary * _secrets;
    int  _syncType;
    NSString * _type;
    NSString * _userDescription;
    NSString * _viewHint;
}

@property (nonatomic, copy) NSString *accessGroup;
@property (nonatomic) int accessibleType;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) bool legacy;
@property (nonatomic, copy) NSDictionary *metadata;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSDictionary *secrets;
@property (nonatomic) int syncType;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) NSString *userDescription;
@property (nonatomic, copy) NSString *viewHint;

// Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils

- (void).cxx_destruct;
- (id)_attributesDictionaryWithFlags:(unsigned int)arg1 error:(id*)arg2;
- (void)_mergeItem:(id)arg1;
- (bool)_updateWithAttributesDictionary:(id)arg1 flags:(unsigned int)arg2 error:(id*)arg3;
- (id)accessGroup;
- (int)accessibleType;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (id)identifier;
- (bool)legacy;
- (id)metadata;
- (id)name;
- (id)secrets;
- (void)setAccessGroup:(id)arg1;
- (void)setAccessibleType:(int)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLegacy:(bool)arg1;
- (void)setMetadata:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSecrets:(id)arg1;
- (void)setSyncType:(int)arg1;
- (void)setType:(id)arg1;
- (void)setUserDescription:(id)arg1;
- (void)setViewHint:(id)arg1;
- (int)syncType;
- (id)type;
- (id)userDescription;
- (id)viewHint;

// Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport

- (unsigned int)updateWithRPIdentity:(id)arg1 error:(id*)arg2;

@end
