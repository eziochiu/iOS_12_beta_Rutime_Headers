/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLListCellManager : NSObject <QLListCellDataGenerationOperationDelegate> {
    NSOperationQueue * _generationQueue;
    NSMutableDictionary * _operations;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSOperationQueue *generationQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *operations;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_operationDidFinish:(id)arg1;
- (void)dealloc;
- (id)generationQueue;
- (id)init;
- (void)operation:(id)arg1 didDetermineFileSize:(id)arg2 fileTypeString:(id)arg3;
- (void)operation:(id)arg1 didGenerateThumbnail:(id)arg2;
- (id)operations;
- (void)setGenerationQueue:(id)arg1;
- (void)setOperations:(id)arg1;
- (void)setupCell:(id)arg1 withItem:(id)arg2 atIndex:(unsigned long long)arg3;

@end
