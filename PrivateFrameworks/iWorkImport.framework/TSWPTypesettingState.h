/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPTypesettingState : NSObject {
    double  _endPos;
    NSDictionary * _hyphenationAttr;
    unsigned int  _hyphenationChar;
    bool  _oikomiSquish;
    double  _startPos;
}

@property (nonatomic) double endPos;
@property (nonatomic, retain) NSDictionary *hyphenationAttr;
@property (nonatomic) unsigned int hyphenationChar;
@property (nonatomic) bool oikomiSquish;
@property (nonatomic) double startPos;

- (void).cxx_destruct;
- (void)clear;
- (double)endPos;
- (id)hyphenationAttr;
- (unsigned int)hyphenationChar;
- (bool)oikomiSquish;
- (void)setEndPos:(double)arg1;
- (void)setHyphenationAttr:(id)arg1;
- (void)setHyphenationChar:(unsigned int)arg1;
- (void)setOikomiSquish:(bool)arg1;
- (void)setStartPos:(double)arg1;
- (double)startPos;

@end
