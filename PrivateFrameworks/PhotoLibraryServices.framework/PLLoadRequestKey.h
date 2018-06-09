/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLLoadRequestKey : NSObject <NSCopying> {
    unsigned long long  _hash;
    NSManagedObjectID * _objectID;
    unsigned short  _sourceID;
}

+ (id)keyWithSource:(id)arg1 asset:(id)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
