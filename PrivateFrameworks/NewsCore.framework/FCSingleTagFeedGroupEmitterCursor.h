/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCSingleTagFeedGroupEmitterCursor : FCFeedGroupEmittingCursor <NSCopying> {
    FCFeedRange * _freeFeedRange;
    FCFeedRange * _paidFeedRange;
}

@property (nonatomic, copy) FCFeedRange *freeFeedRange;
@property (nonatomic, copy) FCFeedRange *paidFeedRange;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)freeFeedRange;
- (id)initWithCoder:(id)arg1;
- (id)paidFeedRange;
- (void)setFreeFeedRange:(id)arg1;
- (void)setPaidFeedRange:(id)arg1;

@end
