/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIPreferencesControllerClient : TIPreferencesController {
    NSXPCConnection * _connection;
    bool  _isValid;
    NSString * _machName;
    bool  _writeable;
}

@property (nonatomic) bool isValid;
@property (nonatomic, retain) NSString *machName;

+ (id)serviceInterface;
+ (id)sharedPreferencesController;

- (void).cxx_destruct;
- (void)_disconnect;
- (void)_pushValue:(id)arg1 toPreference:(id)arg2 domain:(id)arg3;
- (void)createConnectionIfNecessary;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)init;
- (bool)isValid;
- (id)machName;
- (void)performWithWriteability:(bool)arg1 operations:(id /* block */)arg2;
- (void)setIsValid:(bool)arg1;
- (void)setMachName:(id)arg1;
- (void)updateInputModes:(id)arg1;

@end
