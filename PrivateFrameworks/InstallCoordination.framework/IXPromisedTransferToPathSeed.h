/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
 */

@interface IXPromisedTransferToPathSeed : IXOwnedDataPromiseSeed <NSCopying, NSSecureCoding> {
    bool  _shouldCopy;
    NSURL * _transferPath;
    bool  _tryDeltaCopy;
}

@property (nonatomic) bool shouldCopy;
@property (nonatomic, retain) NSURL *transferPath;
@property (nonatomic) bool tryDeltaCopy;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (Class)clientPromiseClass;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setShouldCopy:(bool)arg1;
- (void)setTransferPath:(id)arg1;
- (void)setTryDeltaCopy:(bool)arg1;
- (bool)shouldCopy;
- (id)transferPath;
- (bool)tryDeltaCopy;

@end
