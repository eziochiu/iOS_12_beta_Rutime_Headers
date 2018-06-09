/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedRange : NSObject <NSCopying, NSSecureCoding> {
    FCFeedCursor * _bottom;
    FCFeedCursor * _top;
}

@property (nonatomic, copy) FCFeedCursor *bottom;
@property (nonatomic, readonly, copy) FCDateRange *dateRange;
@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic, readonly) bool reachesBottomOfFeed;
@property (nonatomic, readonly) bool reachesTopOfFeed;
@property (nonatomic, copy) FCFeedCursor *top;

+ (id)feedRangeByMergingRange:(id)arg1 withRange:(id)arg2;
+ (id)feedRangeFromDate:(id)arg1 toDate:(id)arg2;
+ (id)feedRangeFromDateRange:(id)arg1;
+ (id)feedRangeWithMaxOrder:(unsigned long long)arg1 minOrder:(unsigned long long)arg2;
+ (id)feedRangeWithTop:(id)arg1 bottom:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bottom;
- (bool)containsCursor:(id)arg1;
- (bool)containsFeedRange:(id)arg1;
- (bool)containsOrder:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateRange;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)feedRangeByIntersectingWithRange:(id)arg1;
- (id)feedRangeByUnioningWithRange:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)intersectsOrAdjoinsRange:(id)arg1;
- (bool)intersectsRange:(id)arg1;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (bool)reachesBottomOfFeed;
- (bool)reachesTopOfFeed;
- (void)setBottom:(id)arg1;
- (void)setTop:(id)arg1;
- (id)top;

@end
