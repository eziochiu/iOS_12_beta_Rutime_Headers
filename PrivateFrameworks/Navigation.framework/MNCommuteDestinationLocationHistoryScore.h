/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNCommuteDestinationLocationHistoryScore : MNCommuteDestinationScore <MNCommuteDestinationLocationHistoryScore> {
    bool  _destinationInvalid;
    NSArray * _locationHistory;
    int  _score;
    double  _scoredDistance;
    double  _scoredTimeInterval;
}

@property (nonatomic, copy) NSArray *locationHistory;
@property (nonatomic) double scoredDistance;
@property (nonatomic) double scoredTimeInterval;

+ (double)weight;

- (void).cxx_destruct;
- (int)_scoreForDistance:(double)arg1 timeInterval:(double)arg2;
- (id)descriptionExtras;
- (bool)destinationInvalid;
- (id)locationHistory;
- (int)score;
- (double)scoredDistance;
- (double)scoredTimeInterval;
- (void)setLocationHistory:(id)arg1;
- (void)setScoredDistance:(double)arg1;
- (void)setScoredTimeInterval:(double)arg1;
- (void)updateLocationHistory:(id)arg1;
- (void)updateScoreIfPossible;

@end
