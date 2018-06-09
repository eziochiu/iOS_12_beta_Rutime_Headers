/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

@interface SCROBrailleHandler : SCROHandler <SCROSBrailleDisplayManagerDelegate> {
    SCROBrailleDisplayManager * _brailleDisplayManager;
    struct { 
        bool didDisplay; 
        bool keypress; 
        bool replaceTextRange; 
        bool keyWillMem; 
        bool keymem; 
        bool panLeft; 
        bool panRight; 
        bool showPreviousAnnouncement; 
        bool showNextAnnouncement; 
        bool configChanged; 
        bool playDisplayConnectionSound; 
        bool playBorderHitSound; 
        bool playCommandNotSupportedSound; 
        bool bluetoothDisplayLoadFailed; 
        bool tableLoadFailed; 
        bool displayModeChanged; 
        bool startEditing; 
        bool insertUntranslatedText; 
        bool deleteUntranslatedText; 
    }  _callbacks;
    bool  _wantsDidDisplayCallbacks;
    bool  _wantsInputCallbacks;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)configurationDidChange;
- (void)handleBrailleDeletedUntranslatedText:(id)arg1 speakLiterally:(bool)arg2;
- (void)handleBrailleDidDisplay:(id)arg1;
- (void)handleBrailleDidPanLeft:(id)arg1 elementToken:(id)arg2 appToken:(id)arg3;
- (void)handleBrailleDidPanRight:(id)arg1 elementToken:(id)arg2 appToken:(id)arg3;
- (void)handleBrailleDidShowNextAnnouncement:(id)arg1;
- (void)handleBrailleDidShowPreviousAnnouncement:(id)arg1;
- (void)handleBrailleDriverDidLoad;
- (void)handleBrailleDriverDisconnected;
- (void)handleBrailleInsertedUntranslatedText:(id)arg1 speakLiterally:(bool)arg2;
- (void)handleBrailleKeyMemorize:(id)arg1;
- (void)handleBrailleKeyWillMemorize:(id)arg1;
- (void)handleBrailleKeypress:(id)arg1;
- (void)handleBrailleReplaceTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withString:(id)arg2 cursor:(unsigned long long)arg3;
- (void)handleBrailleTableFailedToLoad:(id)arg1;
- (void)handleDisplayModeChanged:(id)arg1;
- (void)handleFailedToLoadBluetoothDevice:(id)arg1;
- (int)handleGetValue:(id*)arg1 forKey:(int)arg2 withObject:(id)arg3 trusted:(bool)arg4;
- (int)handlePerformActionForKey:(int)arg1 trusted:(bool)arg2;
- (void)handlePlayBorderHitSound;
- (void)handlePlayCommandNotSupportedSound;
- (int)handleRegisterCallbackForKey:(int)arg1 trusted:(bool)arg2;
- (int)handleSetValue:(id)arg1 forKey:(int)arg2 trusted:(bool)arg3;
- (void)handleStartEditing;
- (id)initWithBrailleDisplayManager:(id)arg1;
- (void)invalidate;

@end
