/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKLineHeaderModel : NSObject {
    id /* block */  _colorProvider;
    NSDictionary * _fontAttribute;
    bool  _shouldUseEmptyPlaceholder;
    NSMutableArray * _tokens;
}

@property (nonatomic, copy) id /* block */ colorProvider;
@property (nonatomic, copy) NSDictionary *fontAttribute;
@property (nonatomic) bool shouldUseEmptyPlaceholder;

- (void).cxx_destruct;
- (id)_placeCardHeaderSeparatorString;
- (void)addToken:(id)arg1;
- (id /* block */)colorProvider;
- (id)contentAttributedString;
- (id)description;
- (id)fontAttribute;
- (id)init;
- (void)insertToken:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeToken:(id)arg1;
- (void)setColorProvider:(id /* block */)arg1;
- (void)setFontAttribute:(id)arg1;
- (void)setShouldUseEmptyPlaceholder:(bool)arg1;
- (bool)shouldUseEmptyPlaceholder;

@end
