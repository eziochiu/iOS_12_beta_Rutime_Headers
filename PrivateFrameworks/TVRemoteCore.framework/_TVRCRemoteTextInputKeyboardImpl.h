/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

@interface _TVRCRemoteTextInputKeyboardImpl : NSObject <RTIInputSystemPayloadDelegate, RTIInputSystemSessionDelegate, _TVRXKeyboardImpl> {
    TVRCKeyboardAttributes * _currentAttributes;
    RTIInputSystemSourceSession * _currentSession;
    bool  _editing;
    _TVRXKeyboardController * _keyboardController;
    NSDate * _lastSessionTimestamp;
    _TVRCMRTelevisionWrapper * _television;
}

@property (nonatomic, retain) TVRCKeyboardAttributes *currentAttributes;
@property (nonatomic, retain) RTIInputSystemSourceSession *currentSession;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool editing;
@property (readonly) unsigned long long hash;
@property (nonatomic) _TVRXKeyboardController *keyboardController;
@property (nonatomic, retain) NSDate *lastSessionTimestamp;
@property (readonly) Class superclass;
@property (nonatomic, retain) _TVRCMRTelevisionWrapper *television;

- (void).cxx_destruct;
- (void)_receivedInputSourceSession:(id)arg1;
- (bool)_shouldAllowSourceSession;
- (void)_stopObservingTelevisionEditingSession;
- (id)attributes;
- (id)currentAttributes;
- (id)currentSession;
- (void)dealloc;
- (bool)editing;
- (void)handleTextActionPayload:(id)arg1;
- (void)inputSessionDidBegin:(id)arg1;
- (void)inputSessionDidDie:(id)arg1;
- (void)inputSessionDidEnd:(id)arg1;
- (bool)isEditing;
- (id)keyboardController;
- (id)lastSessionTimestamp;
- (void)sendReturnKey;
- (void)setCurrentAttributes:(id)arg1;
- (void)setCurrentSession:(id)arg1;
- (void)setEditing:(bool)arg1;
- (void)setKeyboardController:(id)arg1;
- (void)setLastSessionTimestamp:(id)arg1;
- (void)setTelevision:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextActionPayload:(id)arg1;
- (id)television;
- (id)text;

@end
