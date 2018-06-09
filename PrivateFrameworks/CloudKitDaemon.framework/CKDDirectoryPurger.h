/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDDirectoryPurger : NSObject {
    NSArray * _paths;
    id /* block */  _shouldRemoveFileBlock;
    id /* block */  _shouldSkipFileBlock;
}

@property (nonatomic, retain) NSArray *paths;
@property (nonatomic, copy) id /* block */ shouldRemoveFileBlock;
@property (nonatomic, copy) id /* block */ shouldSkipFileBlock;

+ (void)purgeDirectoryAtPath:(id)arg1;

- (void).cxx_destruct;
- (id)initWithPaths:(id)arg1;
- (id)paths;
- (void)purge;
- (void)setPaths:(id)arg1;
- (void)setShouldRemoveFileBlock:(id /* block */)arg1;
- (void)setShouldSkipFileBlock:(id /* block */)arg1;
- (id /* block */)shouldRemoveFileBlock;
- (id /* block */)shouldSkipFileBlock;

@end
