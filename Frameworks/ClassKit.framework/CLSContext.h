/* made by EzioChiu
   Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

@interface CLSContext : CLSObject <CLSRelationable> {
    bool  _active;
    long long  _authorizationStatus;
    NSString * _contentStoreIdentifier;
    NSString * _currentActivityID;
    long long  _displayOrder;
    NSString * _identifier;
    NSArray * _path;
    NSString * _storeIdentifier;
    NSString * _storeTeamID;
    NSString * _title;
    NSString * _topic;
    long long  _type;
    NSURL * _universalLinkURL;
}

@property (getter=isActive, nonatomic, readonly) bool active;
@property (nonatomic) long long authorizationStatus;
@property (nonatomic, copy) NSString *contentStoreIdentifier;
@property (nonatomic, readonly) CLSActivity *currentActivity;
@property (nonatomic, copy) NSString *currentActivityID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long displayOrder;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSArray *path;
@property (nonatomic, copy) NSString *storeIdentifier;
@property (nonatomic, copy) NSString *storeTeamID;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *topic;
@property (nonatomic) long long type;
@property (nonatomic, retain) NSURL *universalLinkURL;

+ (id)allowedTopics;
+ (id)arrayOfStringClasses;
+ (bool)conformsToProtocol:(id)arg1;
+ (id)objectIDPathFromIdentifierPath:(id)arg1;
+ (id)relations;
+ (id)reservedContextTypes;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (void)addChildContext:(id)arg1;
- (long long)authorizationStatus;
- (void)becomeActive;
- (id)childContextWithIdentifier:(id)arg1;
- (bool)conformsToProtocol:(id)arg1;
- (id)contentStoreIdentifier;
- (id)createNewActivity;
- (id)currentActivity;
- (id)currentActivityID;
- (void)descendantMatchingIdentifierPath:(id)arg1 completion:(id /* block */)arg2;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)displayOrder;
- (long long)effectiveAuthorizationStatus;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithInternalType:(long long)arg1 identifier:(id)arg2 title:(id)arg3;
- (id)initWithType:(long long)arg1 identifier:(id)arg2 title:(id)arg3;
- (bool)isActive;
- (void)mergeWithObject:(id)arg1;
- (id)newItemProvider;
- (id)path;
- (void)removeFromParent;
- (void)resignActive;
- (void)setAuthorizationStatus:(long long)arg1;
- (void)setContentStoreIdentifier:(id)arg1;
- (void)setCurrentActivityID:(id)arg1;
- (void)setDisplayOrder:(long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setPathAndGenerateObjectID:(id)arg1;
- (void)setStoreIdentifier:(id)arg1;
- (void)setStoreTeamID:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTopic:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setUniversalLinkURL:(id)arg1;
- (id)storeIdentifier;
- (id)storeTeamID;
- (id)title;
- (id)topic;
- (long long)type;
- (id)universalLinkURL;
- (bool)validateObject:(id*)arg1;

@end
