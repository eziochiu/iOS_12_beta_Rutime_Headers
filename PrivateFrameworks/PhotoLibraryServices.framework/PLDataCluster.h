/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLDataCluster : NSObject {
    id  _clustroid;
    double  _diameter;
    NSArray * _objects;
    double  _score;
}

@property (nonatomic, retain) id clustroid;
@property (nonatomic) double diameter;
@property (nonatomic, retain) NSArray *objects;
@property (nonatomic) double score;

+ (id)clusterWithObjects:(id)arg1;
+ (id)clusterWithObjects:(id)arg1 clustroid:(id)arg2 diameter:(double)arg3;

- (void).cxx_destruct;
- (id)clustroid;
- (id)description;
- (double)diameter;
- (id)init;
- (id)locations;
- (id)meanRegion:(double)arg1;
- (id)meanUniversalDate;
- (id)objects;
- (double)score;
- (void)setClustroid:(id)arg1;
- (void)setDiameter:(double)arg1;
- (void)setObjects:(id)arg1;
- (void)setScore:(double)arg1;
- (id)universalDates;

@end
