/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicLibraryAlbumsViewConfiguration : MusicLibraryAdaptiveViewConfiguration {
    MusicLibraryAlbumsCollectionViewConfiguration *_collectionViewConfiguration;
    BOOL _shouldForwardBasePropertyValues;
}

- (void).cxx_destruct;
- (void)addQueryFilterPredicate:(id)arg1;
- (BOOL)canPreviewEntityValueContext:(id)arg1;
- (id)entityViewDescriptor;
- (void)handleCommitPreviewViewController:(id)arg1 fromViewController:(id)arg2;
- (int)handleSelectionFromUserActivityContext:(id)arg1 containerItem:(id)arg2 entityValueContext:(id)arg3 viewController:(id)arg4;
- (int)handleSelectionOfEntityValueContext:(id)arg1 fromViewController:(id)arg2;
- (id)init;
- (id)initForMainAlbumsList:(BOOL)arg1 includeCompilations:(BOOL)arg2;
- (id)loadCompactWidthConfiguration;
- (id)loadRegularWidthConfiguration;
- (id)previewViewControllerForEntityValueContext:(id)arg1 fromViewController:(id)arg2;
- (BOOL)pushAlbumViewWithAlbumPersistentID:(unsigned long long)arg1 fromViewController:(id)arg2;
- (void)setIconName:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setTitle:(id)arg1;

@end