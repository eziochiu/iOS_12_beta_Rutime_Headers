/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedGroupEmittingNumberCursor : FCFeedGroupEmittingCursor {
    NSNumber * _number;
}

@property (nonatomic, readonly) NSNumber *number;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNumber:(id)arg1;
- (id)number;

@end
