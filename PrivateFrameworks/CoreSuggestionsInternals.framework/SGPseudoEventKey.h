/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGPseudoEventKey : NSObject <SGEntityKey> {
    NSString * _domain;
    NSString * _groupId;
    NSString * _serialized;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *domain;
@property (nonatomic, readonly) NSString *groupId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)isSupportedEntityType:(long long)arg1;

- (void).cxx_destruct;
- (id)alternativeKeysForEventKitQuery;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)domain;
- (id)groupId;
- (unsigned long long)hash;
- (id)initWithGloballyUniqueId:(id)arg1;
- (id)initWithSerialized:(id)arg1;
- (bool)isDropoff;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPseudoEventKey:(id)arg1;
- (id)keyForEventKitQuery;
- (id)serialize;

@end
