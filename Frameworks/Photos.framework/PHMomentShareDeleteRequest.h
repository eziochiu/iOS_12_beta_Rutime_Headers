/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHMomentShareDeleteRequest : PHObjectDeleteRequest {
    long long  _operation;
}

@property (nonatomic) long long operation;

- (void)deleteManagedObject:(id)arg1 photoLibrary:(id)arg2;
- (void)encodeToXPCDict:(id)arg1;
- (id)initWithXPCDict:(id)arg1 clientEntitlements:(id)arg2 clientName:(id)arg3 clientBundleID:(id)arg4 clientProcessID:(int)arg5;
- (long long)operation;
- (void)setOperation:(long long)arg1;
- (bool)validateForDeleteManagedObject:(id)arg1 error:(id*)arg2;

@end
