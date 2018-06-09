/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface PARMoreResultsRequest : PARRequest <NSSecureCoding> {
    NSURL * _moreResultsURL;
}

@property (nonatomic, copy) NSURL *moreResultsURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)moreResultsURL;
- (void)setMoreResultsURL:(id)arg1;

@end
