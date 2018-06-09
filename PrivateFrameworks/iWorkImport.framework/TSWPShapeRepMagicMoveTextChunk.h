/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPShapeRepMagicMoveTextChunk : NSObject {
    bool  _hasListLabel;
    bool  _isVisible;
    double  _opacityFromRenderer;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    TSWPShapeRep * _rep;
    long long  _stageIndex;
    NSString * _stringValue;
    NSMutableIndexSet * _unhandledIndexSet;
}

@property (nonatomic) bool hasListLabel;
@property (nonatomic) bool isVisible;
@property (nonatomic) double opacityFromRenderer;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic) TSWPShapeRep *rep;
@property (nonatomic) long long stageIndex;
@property (nonatomic, copy) NSString *stringValue;
@property (nonatomic, retain) NSMutableIndexSet *unhandledIndexSet;

- (void)dealloc;
- (id)description;
- (bool)hasListLabel;
- (id)init;
- (bool)isVisible;
- (double)opacityFromRenderer;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (id)rep;
- (void)setHasListLabel:(bool)arg1;
- (void)setIsVisible:(bool)arg1;
- (void)setOpacityFromRenderer:(double)arg1;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setRep:(id)arg1;
- (void)setStageIndex:(long long)arg1;
- (void)setStringValue:(id)arg1;
- (void)setUnhandledIndexSet:(id)arg1;
- (long long)stageIndex;
- (id)stringValue;
- (id)unhandledIndexSet;

@end
