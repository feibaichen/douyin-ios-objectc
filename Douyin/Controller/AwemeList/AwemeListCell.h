//
//  AwemeListCell.h
//  Douyin
//
//  Created by Qiao Shi on 2018/7/30.
//  Copyright © 2018年 Qiao Shi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Constants.h"
#import "Masonry.h"
#import "FocusView.h"
#import "FavoriteView.h"
#import "HoverTextView.h"
#import "MusicAlbumView.h"
#import "AVPlayerView.h"
#import "CircleTextView.h"
#import "Aweme.h"

typedef void (^OnPlayerReady)(void);

@interface AwemeListCell : UITableViewCell

@property (nonatomic, strong) Aweme            *aweme;

@property (nonatomic, strong) AVPlayerView     *playerView;
@property (nonatomic, strong) HoverTextView    *hoverTextView;

@property (nonatomic, strong) CircleTextView   *musicName;
@property (nonatomic, strong) UILabel          *desc;
@property (nonatomic, strong) UILabel          *nickName;

@property (nonatomic, strong) UIImageView      *avatar;
@property (nonatomic, strong) FocusView        *focus;
@property (nonatomic, strong) MusicAlbumView   *musicAlum;

@property (nonatomic, strong) UIImageView      *share;
@property (nonatomic, strong) UIImageView      *comment;

@property (nonatomic, strong) FavoriteView     *favorite;

@property (nonatomic, strong) UILabel          *shareNum;
@property (nonatomic, strong) UILabel          *commentNum;
@property (nonatomic, strong) UILabel          *favoriteNum;

@property (nonatomic, strong) OnPlayerReady    onPlayerReady;
@property (nonatomic, assign) BOOL             isPlayerReady;

- (void)initData:(Aweme *)aweme;

-(void)play;

-(void)pause;

-(void)replay;

@end
