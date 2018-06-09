/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebSelectionRect : NSObject <NSCopying> {
    bool  m_containsEnd;
    bool  m_containsStart;
    bool  m_isFirstOnLine;
    bool  m_isHorizontal;
    bool  m_isInFixedPosition;
    bool  m_isLastOnLine;
    bool  m_isLineBreak;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  m_rect;
    int  m_writingDirection;
}

@property (nonatomic) bool containsEnd;
@property (nonatomic) bool containsStart;
@property (nonatomic) bool isFirstOnLine;
@property (nonatomic) bool isHorizontal;
@property (nonatomic) bool isInFixedPosition;
@property (nonatomic) bool isLastOnLine;
@property (nonatomic) bool isLineBreak;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } rect;
@property (nonatomic) int writingDirection;

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })endEdge:(id)arg1;
+ (id)selectionRect;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })startEdge:(id)arg1;

- (bool)containsEnd;
- (bool)containsStart;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (bool)isFirstOnLine;
- (bool)isHorizontal;
- (bool)isInFixedPosition;
- (bool)isLastOnLine;
- (bool)isLineBreak;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rect;
- (void)setContainsEnd:(bool)arg1;
- (void)setContainsStart:(bool)arg1;
- (void)setIsFirstOnLine:(bool)arg1;
- (void)setIsHorizontal:(bool)arg1;
- (void)setIsInFixedPosition:(bool)arg1;
- (void)setIsLastOnLine:(bool)arg1;
- (void)setIsLineBreak:(bool)arg1;
- (void)setRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setWritingDirection:(int)arg1;
- (int)writingDirection;

@end
