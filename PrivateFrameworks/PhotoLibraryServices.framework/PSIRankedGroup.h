/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PSIRankedGroup : NSObject {
    PSIGroup * _group;
    double  _score;
}

@property (nonatomic, readonly) PSIGroup *group;
@property (nonatomic) double score;

- (id)group;
- (id)initWithGroup:(id)arg1 score:(double)arg2;
- (double)score;
- (void)setScore:(double)arg1;

@end
