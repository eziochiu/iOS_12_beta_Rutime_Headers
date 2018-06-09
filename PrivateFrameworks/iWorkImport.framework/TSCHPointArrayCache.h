/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHPointArrayCache : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mAreaFrame;
    bool  mCull;
    NSData * mData;
    unsigned long long  mEnd;
    TSCHChartSeries * mSeries;
    unsigned long long  mStart;
}

+ (struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; bool x3; unsigned long long x4; }*)cachedPointsForSeries:(id)arg1 inAreaFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 valueStart:(unsigned long long)arg3 valueEnd:(unsigned long long)arg4 cullBadPoints:(bool)arg5 outCount:(unsigned long long*)arg6;
+ (void)clearCache;
+ (id)p_getCacheCreate:(bool)arg1;
+ (void)setCachedPointsForSeries:(id)arg1 inAreaFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 valueStart:(unsigned long long)arg3 valueEnd:(unsigned long long)arg4 cullBadPoints:(bool)arg5 points:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; bool x3; unsigned long long x4; }*)arg6 count:(unsigned long long)arg7;

- (void)dealloc;
- (bool)matchesSeries:(id)arg1 areaFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 start:(unsigned long long)arg3 end:(unsigned long long)arg4 cull:(bool)arg5;

@end
