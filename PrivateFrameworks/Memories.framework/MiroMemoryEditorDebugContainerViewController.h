/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroMemoryEditorDebugContainerViewController : MiroMemoryEditorBasePlayerViewController {
    MiroMemory * _memory;
    unsigned long long  _pickerMode;
    <MiroPlayerControlling> * _playerController;
}

@property (nonatomic) MiroMemory *memory;
@property (nonatomic) unsigned long long pickerMode;
@property (nonatomic) <MiroPlayerControlling> *playerController;

- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (id)memory;
- (unsigned long long)pickerMode;
- (id)playerController;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)setMemory:(id)arg1;
- (void)setPickerMode:(unsigned long long)arg1;
- (void)setPlayerController:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end