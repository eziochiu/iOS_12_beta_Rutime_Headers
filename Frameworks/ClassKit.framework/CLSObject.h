/* made by EzioChiu
   Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

@interface CLSObject : NSObject <CLSGraphVertex, CLSRelationable, NSLocking, NSSecureCoding> {
    NSString * _appIdentifier;
    struct NSMutableDictionary { Class x1; } * _childrenByID;
    CLSDataStore * _dataStore;
    NSDate * _dateCreated;
    NSDate * _dateLastModified;
    bool  _deleted;
    unsigned int  _generation;
    struct os_unfair_recursive_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } ourl_lock; 
        unsigned int ourl_count; 
    }  _lock;
    bool  _modified;
    NSString * _objectID;
    CLSObject * _parent;
    NSString * _parentObjectID;
    bool  _temporary;
}

@property (nonatomic, copy) NSString *appIdentifier;
@property (nonatomic) CLSDataStore *dataStore;
@property (nonatomic, retain) NSDate *dateCreated;
@property (nonatomic, retain) NSDate *dateLastModified;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isDeleted, nonatomic) bool deleted;
@property (readonly, copy) NSString *description;
@property unsigned int generation;
@property (readonly) unsigned long long hash;
@property (getter=isModified, nonatomic) bool modified;
@property (nonatomic, copy) NSString *objectID;
@property (nonatomic) CLSObject *parent;
@property (nonatomic, copy) NSString *parentObjectID;
@property (readonly) Class superclass;
@property (getter=isTemporary, nonatomic) bool temporary;
@property (nonatomic, readonly) id vertexID;

+ (id)dateFormatter;
+ (id)relations;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_addChild:(id)arg1;
- (void)_addChild:(id)arg1 lock:(bool)arg2;
- (id)_init;
- (void)addChild:(id)arg1;
- (void)addChild:(id)arg1 changedPropertyName:(id)arg2;
- (id)ancestorOfClass:(Class)arg1;
- (id)appIdentifier;
- (id)childrenOfClass:(Class)arg1;
- (id)childrenPassingTest:(id /* block */)arg1;
- (id)dataStore;
- (id)dateCreated;
- (id)dateLastModified;
- (id)description;
- (id)dictionaryRepresentation;
- (void)didSaveObject;
- (long long)effectiveAuthorizationStatus;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateChildren:(id /* block */)arg1;
- (void)enumerateTree:(id /* block */)arg1;
- (unsigned int)generation;
- (id)identity;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeletedObjectID:(id)arg1;
- (bool)isDeleted;
- (bool)isModified;
- (bool)isTemporary;
- (void)lock;
- (void)mergeWithObject:(id)arg1;
- (id)objectID;
- (id)parent;
- (id)parentObjectID;
- (void)removeChild:(id)arg1;
- (void)removeChild:(id)arg1 changedPropertyName:(id)arg2;
- (void)setAppIdentifier:(id)arg1;
- (void)setDataStore:(id)arg1;
- (void)setDateCreated:(id)arg1;
- (void)setDateLastModified:(id)arg1;
- (void)setDeleted:(bool)arg1;
- (void)setGeneration:(unsigned int)arg1;
- (void)setModified:(bool)arg1;
- (void)setObjectID:(id)arg1;
- (void)setParent:(id)arg1;
- (void)setParentObjectID:(id)arg1;
- (void)setTemporary:(bool)arg1;
- (void)unlock;
- (bool)validateObject:(id*)arg1;
- (id)vertexID;
- (void)willSaveObject;

@end
