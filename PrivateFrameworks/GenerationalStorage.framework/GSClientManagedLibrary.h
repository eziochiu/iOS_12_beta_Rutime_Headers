/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
 */

@interface GSClientManagedLibrary : NSObject <GSLibraryProtocol> {
    GSTemporaryStorage * _ts;
}

@property (nonatomic, readonly) NSString *nameSpace;
@property (nonatomic, readonly) NSObject<GSAdditionStoring> *storage;

- (void).cxx_destruct;
- (bool)generationsRemove:(id)arg1 error:(id*)arg2;
- (id)initWithURL:(id)arg1 error:(id*)arg2;
- (id)nameSpace;
- (struct NSObject { Class x1; }*)storage;

@end
