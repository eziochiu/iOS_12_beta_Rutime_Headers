/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSPersistentStoreRequest : NSObject <NSCopying> {
    NSArray * _affectedStores;
}

@property (nonatomic, retain) NSArray *affectedStores;
@property (readonly) unsigned long long requestType;

+ (void)initialize;

- (bool)_secureOperation;
- (void)_setSecureOperation:(bool)arg1;
- (id)affectedStores;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)requestType;
- (void)setAffectedStores:(id)arg1;

@end
