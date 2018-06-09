/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIMonogramImage : SearchUIImage {
    NSString * _letters;
}

@property (retain) NSString *letters;

+ (id)avatarImageRenderer;

- (void).cxx_destruct;
- (id)initWithSFImage:(id)arg1;
- (id)letters;
- (void)loadImageWithCompletionHandler:(id /* block */)arg1;
- (void)setLetters:(id)arg1;

@end
