/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXBlueprintAnalyzerCursor : NSObject {
    double  _highestMaxY;
    NSMutableArray * _mutablePath;
    NSArray * _path;
}

@property (nonatomic) double highestMaxY;
@property (nonatomic, readonly) NSMutableArray *mutablePath;
@property (nonatomic, retain) NSArray *path;

- (void).cxx_destruct;
- (void)addPathComponent:(id)arg1;
- (double)highestMaxY;
- (id)init;
- (id)mutablePath;
- (id)path;
- (void)removePathComponent:(id)arg1;
- (void)setHighestMaxY:(double)arg1;
- (void)setPath:(id)arg1;

@end
