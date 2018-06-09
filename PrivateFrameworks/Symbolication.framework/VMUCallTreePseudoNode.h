/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUCallTreePseudoNode : VMUCallTreeNode

- (void)addChildCountsIntoNode;
- (bool)isPseudo;
- (id)largestTopOfStackPath;
- (id)pseudoNodeTopOfStackChild;
- (id)sortedChildrenWithPseudoNode;

@end
