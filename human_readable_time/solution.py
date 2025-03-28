def make_readable(seconds):
    h = seconds // 3600; seconds %= 3600
    m = seconds // 60; seconds %= 60
    d = seconds
    
    return f"{h:02d}:{m:02d}:{d:02d}"
