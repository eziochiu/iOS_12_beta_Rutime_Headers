/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIWordSearchController : NSObject {
    NSMapTable * _inputModeToWordSearchMapping;
}

@property (nonatomic, retain) NSMapTable *inputModeToWordSearchMapping;

+ (id)sharedWordSearchController;

- (void).cxx_destruct;
- (id)init;
- (id)inputModeToWordSearchMapping;
- (void)setInputModeToWordSearchMapping:(id)arg1;
- (void)setWordSearch:(id)arg1 forInputMode:(id)arg2;
- (id)wordSearchForInputMode:(id)arg1;

@end
