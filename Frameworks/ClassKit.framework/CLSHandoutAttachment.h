/* made by EzioChiu
   Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

@interface CLSHandoutAttachment : CLSObject <CLSRelationable> {
    NSURL * _URL;
    NSString * _bundleIdentifier;
    int  _completionStatus;
    NSString * _contentStoreIdentifier;
    NSArray * _contextPath;
    long long  _contextType;
    NSDate * _dateLastCompleted;
    long long  _displayOrder;
    bool  _locked;
    int  _permissionType;
    int  _shareType;
    NSString * _storeIdentifier;
    NSString * _title;
    int  _type;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic, readonly) NSArray *assets;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (getter=isComplete, nonatomic, readonly) bool complete;
@property (nonatomic) int completionStatus;
@property (nonatomic, copy) NSString *contentStoreIdentifier;
@property (nonatomic, copy) NSArray *contextPath;
@property (nonatomic) long long contextType;
@property (nonatomic, retain) NSDate *dateLastCompleted;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long displayOrder;
@property (readonly) unsigned long long hash;
@property (getter=isLocked, nonatomic) bool locked;
@property (nonatomic, readonly) CLSHandout *parent;
@property (nonatomic, readonly) NSString *parentObjectID;
@property (nonatomic) int permissionType;
@property (nonatomic) int shareType;
@property (nonatomic, copy) NSString *storeIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) int type;

+ (id)relations;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (id)_init;
- (void)addAsset:(id)arg1;
- (id)assets;
- (id)bundleIdentifier;
- (int)completionStatus;
- (id)contentStoreIdentifier;
- (id)contextPath;
- (long long)contextType;
- (id)dateLastCompleted;
- (id)dictionaryRepresentation;
- (long long)displayOrder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(int)arg1 title:(id)arg2;
- (bool)isComplete;
- (bool)isLocked;
- (void)mergeWithObject:(id)arg1;
- (int)permissionType;
- (void)removeAsset:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setCompletionStatus:(int)arg1;
- (void)setContentStoreIdentifier:(id)arg1;
- (void)setContextPath:(id)arg1;
- (void)setContextType:(long long)arg1;
- (void)setDateLastCompleted:(id)arg1;
- (void)setDisplayOrder:(long long)arg1;
- (void)setLocked:(bool)arg1;
- (void)setPermissionType:(int)arg1;
- (void)setShareType:(int)arg1;
- (void)setStoreIdentifier:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setURL:(id)arg1;
- (int)shareType;
- (id)storeIdentifier;
- (id)title;
- (int)type;
- (bool)validateObject:(id*)arg1;

@end
