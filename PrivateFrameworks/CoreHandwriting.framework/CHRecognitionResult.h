/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHRecognitionResult : NSObject {
    double  _score;
}

@property double score;

- (id)description;
- (id)initWithScore:(double)arg1;
- (double)score;
- (void)setScore:(double)arg1;

@end
