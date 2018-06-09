/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroPlayerViewController : UIViewController {
    MiroAutoEditor * _autoEditor;
    MiroMemory * _memory;
    <MemoryOwner> * _memoryOwnerDelegate;
}

@property (nonatomic, retain) MiroAutoEditor *autoEditor;
@property (nonatomic, retain) MiroMemory *memory;
@property (nonatomic, retain) <MemoryOwner> *memoryOwnerDelegate;

- (void).cxx_destruct;
- (id)autoEditor;
- (void)didReceiveMemoryWarning;
- (id)memory;
- (id)memoryOwnerDelegate;
- (void)setAutoEditor:(id)arg1;
- (void)setMemory:(id)arg1;
- (void)setMemoryOwnerDelegate:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)warnTooManyLiveCompositors:(id)arg1;

@end
