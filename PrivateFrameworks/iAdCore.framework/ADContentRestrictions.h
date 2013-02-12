/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@class NSString;

@interface ADContentRestrictions : PBCodable {
    BOOL _allowITunes;
    BOOL _allowInstallApps;
    int _appsRank;
    NSString *_countryCode;
    BOOL _denyExplicit;
    BOOL _hasAllowITunes;
    BOOL _hasAllowInstallApps;
    BOOL _hasAppsRank;
    BOOL _hasDenyExplicit;
    BOOL _hasMoviesRank;
    BOOL _hasTvshowsRank;
    int _moviesRank;
    int _tvshowsRank;
}

@property BOOL allowITunes;
@property BOOL allowInstallApps;
@property int appsRank;
@property(retain) NSString * countryCode;
@property BOOL denyExplicit;
@property BOOL hasAllowITunes;
@property BOOL hasAllowInstallApps;
@property BOOL hasAppsRank;
@property(readonly) BOOL hasCountryCode;
@property BOOL hasDenyExplicit;
@property BOOL hasMoviesRank;
@property BOOL hasTvshowsRank;
@property int moviesRank;
@property int tvshowsRank;

- (BOOL)allowITunes;
- (BOOL)allowInstallApps;
- (int)appsRank;
- (void)copyTo:(id)arg1;
- (id)countryCode;
- (void)dealloc;
- (BOOL)denyExplicit;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAllowITunes;
- (BOOL)hasAllowInstallApps;
- (BOOL)hasAppsRank;
- (BOOL)hasCountryCode;
- (BOOL)hasDenyExplicit;
- (BOOL)hasMoviesRank;
- (BOOL)hasTvshowsRank;
- (int)moviesRank;
- (BOOL)readFrom:(id)arg1;
- (void)setAllowITunes:(BOOL)arg1;
- (void)setAllowInstallApps:(BOOL)arg1;
- (void)setAppsRank:(int)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setDenyExplicit:(BOOL)arg1;
- (void)setHasAllowITunes:(BOOL)arg1;
- (void)setHasAllowInstallApps:(BOOL)arg1;
- (void)setHasAppsRank:(BOOL)arg1;
- (void)setHasDenyExplicit:(BOOL)arg1;
- (void)setHasMoviesRank:(BOOL)arg1;
- (void)setHasTvshowsRank:(BOOL)arg1;
- (void)setMoviesRank:(int)arg1;
- (void)setTvshowsRank:(int)arg1;
- (int)tvshowsRank;
- (void)writeTo:(id)arg1;

@end