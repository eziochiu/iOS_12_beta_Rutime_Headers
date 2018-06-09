/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UITextSuggestion : NSObject <NSCopying> {
    bool  __shouldPersist;
    bool  _displayStylePlain;
    NSString * _displayText;
    NSString * _headerText;
    NSString * _inputText;
    NSString * _searchText;
}

@property (nonatomic, readonly) TIKeyboardCandidate *_keyboardCandidate;
@property (nonatomic, readonly) bool _shouldPersist;
@property (nonatomic) bool displayStylePlain;
@property (nonatomic, copy) NSString *displayText;
@property (nonatomic, copy) NSString *headerText;
@property (nonatomic, readonly, copy) NSString *inputText;
@property (nonatomic, copy) NSString *searchText;

+ (id)textSuggestionWithInputText:(id)arg1;
+ (id)textSuggestionWithInputText:(id)arg1 searchText:(id)arg2;

- (void).cxx_destruct;
- (id)_keyboardCandidate;
- (bool)_shouldPersist;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)displayStylePlain;
- (id)displayText;
- (id)headerText;
- (id)initWithInputText:(id)arg1 searchText:(id)arg2 displayText:(id)arg3 headerText:(id)arg4;
- (id)inputText;
- (id)searchText;
- (void)setDisplayStylePlain:(bool)arg1;
- (void)setDisplayText:(id)arg1;
- (void)setHeaderText:(id)arg1;
- (void)setSearchText:(id)arg1;

@end
