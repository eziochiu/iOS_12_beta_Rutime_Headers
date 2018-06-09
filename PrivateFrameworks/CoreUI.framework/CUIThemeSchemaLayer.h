/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIThemeSchemaLayer : NSObject {
    unsigned long long  _index;
    NSString * _name;
    NSArray * _renditions;
}

@property (nonatomic) unsigned long long index;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSArray *renditions;

+ (id)layerWithRenditions:(id)arg1 name:(id)arg2 index:(unsigned long long)arg3;

- (void)calculateColumLefts:(id*)arg1 rowTops:(id*)arg2 totalSize:(struct CGSize { double x1; double x2; }*)arg3 forPartFeatures:(unsigned long long)arg4;
- (void)dealloc;
- (unsigned long long)index;
- (id)initWithRenditions:(id)arg1 name:(id)arg2 index:(unsigned long long)arg3;
- (id)name;
- (id)renditions;
- (void)setIndex:(unsigned long long)arg1;
- (void)setName:(id)arg1;
- (void)setRenditions:(id)arg1;
- (double)translateFromWidthsOrHeightsToLeftsOrTops:(id)arg1 leftsOrTops:(id*)arg2;

@end
