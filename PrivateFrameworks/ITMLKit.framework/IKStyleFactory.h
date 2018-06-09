/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKStyleFactory : NSObject <NSCopying> {
    NSMutableDictionary * _styleListsByClassSelector;
    IKStylesGroup * _stylesGroup;
}

@property (nonatomic, readonly, retain) NSMutableDictionary *styleListsByClassSelector;
@property (nonatomic, readonly, retain) IKStylesGroup *stylesGroup;

+ (id)styleFactoryWithMarkup:(id)arg1 filterBlockedStyles:(bool)arg2;

- (void).cxx_destruct;
- (id)_collapsedStyleListForSelectors:(id)arg1 targetSelector:(id)arg2 stylesGroup:(id)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithStylesGroup:(id)arg1;
- (void)setViewElementStylesDirty;
- (id)styleListForClassSelector:(id)arg1;
- (id)styleListsByClassSelector;
- (id)stylesGroup;

@end
