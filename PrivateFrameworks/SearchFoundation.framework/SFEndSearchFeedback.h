/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFEndSearchFeedback : SFFeedback {
    unsigned long long  _cancelSearchEvent;
    bool  _isCanceled;
    NSString * _uuid;
}

@property (nonatomic) unsigned long long cancelSearchEvent;
@property (nonatomic) bool isCanceled;
@property (nonatomic, copy) NSString *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)cancelSearchEvent;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartSearch:(id)arg1;
- (bool)isCanceled;
- (void)setCancelSearchEvent:(unsigned long long)arg1;
- (void)setIsCanceled:(bool)arg1;
- (void)setUuid:(id)arg1;
- (id)uuid;

@end
